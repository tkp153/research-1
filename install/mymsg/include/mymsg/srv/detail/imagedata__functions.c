// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice
#include "mymsg/srv/detail/imagedata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input_data`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
mymsg__srv__Imagedata_Request__init(mymsg__srv__Imagedata_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input_data
  if (!sensor_msgs__msg__Image__init(&msg->input_data)) {
    mymsg__srv__Imagedata_Request__fini(msg);
    return false;
  }
  // input_count
  return true;
}

void
mymsg__srv__Imagedata_Request__fini(mymsg__srv__Imagedata_Request * msg)
{
  if (!msg) {
    return;
  }
  // input_data
  sensor_msgs__msg__Image__fini(&msg->input_data);
  // input_count
}

bool
mymsg__srv__Imagedata_Request__are_equal(const mymsg__srv__Imagedata_Request * lhs, const mymsg__srv__Imagedata_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_data
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->input_data), &(rhs->input_data)))
  {
    return false;
  }
  // input_count
  if (lhs->input_count != rhs->input_count) {
    return false;
  }
  return true;
}

bool
mymsg__srv__Imagedata_Request__copy(
  const mymsg__srv__Imagedata_Request * input,
  mymsg__srv__Imagedata_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input_data
  if (!sensor_msgs__msg__Image__copy(
      &(input->input_data), &(output->input_data)))
  {
    return false;
  }
  // input_count
  output->input_count = input->input_count;
  return true;
}

mymsg__srv__Imagedata_Request *
mymsg__srv__Imagedata_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Request * msg = (mymsg__srv__Imagedata_Request *)allocator.allocate(sizeof(mymsg__srv__Imagedata_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__srv__Imagedata_Request));
  bool success = mymsg__srv__Imagedata_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mymsg__srv__Imagedata_Request__destroy(mymsg__srv__Imagedata_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mymsg__srv__Imagedata_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mymsg__srv__Imagedata_Request__Sequence__init(mymsg__srv__Imagedata_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Request * data = NULL;

  if (size) {
    data = (mymsg__srv__Imagedata_Request *)allocator.zero_allocate(size, sizeof(mymsg__srv__Imagedata_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__srv__Imagedata_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__srv__Imagedata_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mymsg__srv__Imagedata_Request__Sequence__fini(mymsg__srv__Imagedata_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsg__srv__Imagedata_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mymsg__srv__Imagedata_Request__Sequence *
mymsg__srv__Imagedata_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Request__Sequence * array = (mymsg__srv__Imagedata_Request__Sequence *)allocator.allocate(sizeof(mymsg__srv__Imagedata_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mymsg__srv__Imagedata_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mymsg__srv__Imagedata_Request__Sequence__destroy(mymsg__srv__Imagedata_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mymsg__srv__Imagedata_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mymsg__srv__Imagedata_Request__Sequence__are_equal(const mymsg__srv__Imagedata_Request__Sequence * lhs, const mymsg__srv__Imagedata_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__srv__Imagedata_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__srv__Imagedata_Request__Sequence__copy(
  const mymsg__srv__Imagedata_Request__Sequence * input,
  mymsg__srv__Imagedata_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__srv__Imagedata_Request);
    mymsg__srv__Imagedata_Request * data =
      (mymsg__srv__Imagedata_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__srv__Imagedata_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__srv__Imagedata_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mymsg__srv__Imagedata_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output_data`
// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"

bool
mymsg__srv__Imagedata_Response__init(mymsg__srv__Imagedata_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output_cut
  // output_count
  // output_data
  if (!sensor_msgs__msg__Image__init(&msg->output_data)) {
    mymsg__srv__Imagedata_Response__fini(msg);
    return false;
  }
  return true;
}

void
mymsg__srv__Imagedata_Response__fini(mymsg__srv__Imagedata_Response * msg)
{
  if (!msg) {
    return;
  }
  // output_cut
  // output_count
  // output_data
  sensor_msgs__msg__Image__fini(&msg->output_data);
}

bool
mymsg__srv__Imagedata_Response__are_equal(const mymsg__srv__Imagedata_Response * lhs, const mymsg__srv__Imagedata_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output_cut
  if (lhs->output_cut != rhs->output_cut) {
    return false;
  }
  // output_count
  if (lhs->output_count != rhs->output_count) {
    return false;
  }
  // output_data
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->output_data), &(rhs->output_data)))
  {
    return false;
  }
  return true;
}

bool
mymsg__srv__Imagedata_Response__copy(
  const mymsg__srv__Imagedata_Response * input,
  mymsg__srv__Imagedata_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output_cut
  output->output_cut = input->output_cut;
  // output_count
  output->output_count = input->output_count;
  // output_data
  if (!sensor_msgs__msg__Image__copy(
      &(input->output_data), &(output->output_data)))
  {
    return false;
  }
  return true;
}

mymsg__srv__Imagedata_Response *
mymsg__srv__Imagedata_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Response * msg = (mymsg__srv__Imagedata_Response *)allocator.allocate(sizeof(mymsg__srv__Imagedata_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__srv__Imagedata_Response));
  bool success = mymsg__srv__Imagedata_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mymsg__srv__Imagedata_Response__destroy(mymsg__srv__Imagedata_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mymsg__srv__Imagedata_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mymsg__srv__Imagedata_Response__Sequence__init(mymsg__srv__Imagedata_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Response * data = NULL;

  if (size) {
    data = (mymsg__srv__Imagedata_Response *)allocator.zero_allocate(size, sizeof(mymsg__srv__Imagedata_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__srv__Imagedata_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__srv__Imagedata_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mymsg__srv__Imagedata_Response__Sequence__fini(mymsg__srv__Imagedata_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsg__srv__Imagedata_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mymsg__srv__Imagedata_Response__Sequence *
mymsg__srv__Imagedata_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__srv__Imagedata_Response__Sequence * array = (mymsg__srv__Imagedata_Response__Sequence *)allocator.allocate(sizeof(mymsg__srv__Imagedata_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mymsg__srv__Imagedata_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mymsg__srv__Imagedata_Response__Sequence__destroy(mymsg__srv__Imagedata_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mymsg__srv__Imagedata_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mymsg__srv__Imagedata_Response__Sequence__are_equal(const mymsg__srv__Imagedata_Response__Sequence * lhs, const mymsg__srv__Imagedata_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__srv__Imagedata_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__srv__Imagedata_Response__Sequence__copy(
  const mymsg__srv__Imagedata_Response__Sequence * input,
  mymsg__srv__Imagedata_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__srv__Imagedata_Response);
    mymsg__srv__Imagedata_Response * data =
      (mymsg__srv__Imagedata_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__srv__Imagedata_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__srv__Imagedata_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mymsg__srv__Imagedata_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
