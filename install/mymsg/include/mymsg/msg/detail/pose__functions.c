// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsg:msg/Pose.idl
// generated code does not contain a copyright notice
#include "mymsg/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `keypoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mymsg__msg__Pose__init(mymsg__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // keypoints
  if (!rosidl_runtime_c__float__Sequence__init(&msg->keypoints, 0)) {
    mymsg__msg__Pose__fini(msg);
    return false;
  }
  return true;
}

void
mymsg__msg__Pose__fini(mymsg__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // keypoints
  rosidl_runtime_c__float__Sequence__fini(&msg->keypoints);
}

bool
mymsg__msg__Pose__are_equal(const mymsg__msg__Pose * lhs, const mymsg__msg__Pose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keypoints
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->keypoints), &(rhs->keypoints)))
  {
    return false;
  }
  return true;
}

bool
mymsg__msg__Pose__copy(
  const mymsg__msg__Pose * input,
  mymsg__msg__Pose * output)
{
  if (!input || !output) {
    return false;
  }
  // keypoints
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->keypoints), &(output->keypoints)))
  {
    return false;
  }
  return true;
}

mymsg__msg__Pose *
mymsg__msg__Pose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__msg__Pose * msg = (mymsg__msg__Pose *)allocator.allocate(sizeof(mymsg__msg__Pose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsg__msg__Pose));
  bool success = mymsg__msg__Pose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mymsg__msg__Pose__destroy(mymsg__msg__Pose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mymsg__msg__Pose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mymsg__msg__Pose__Sequence__init(mymsg__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__msg__Pose * data = NULL;

  if (size) {
    data = (mymsg__msg__Pose *)allocator.zero_allocate(size, sizeof(mymsg__msg__Pose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsg__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsg__msg__Pose__fini(&data[i - 1]);
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
mymsg__msg__Pose__Sequence__fini(mymsg__msg__Pose__Sequence * array)
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
      mymsg__msg__Pose__fini(&array->data[i]);
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

mymsg__msg__Pose__Sequence *
mymsg__msg__Pose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mymsg__msg__Pose__Sequence * array = (mymsg__msg__Pose__Sequence *)allocator.allocate(sizeof(mymsg__msg__Pose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mymsg__msg__Pose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mymsg__msg__Pose__Sequence__destroy(mymsg__msg__Pose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mymsg__msg__Pose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mymsg__msg__Pose__Sequence__are_equal(const mymsg__msg__Pose__Sequence * lhs, const mymsg__msg__Pose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mymsg__msg__Pose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mymsg__msg__Pose__Sequence__copy(
  const mymsg__msg__Pose__Sequence * input,
  mymsg__msg__Pose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mymsg__msg__Pose);
    mymsg__msg__Pose * data =
      (mymsg__msg__Pose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mymsg__msg__Pose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mymsg__msg__Pose__fini(&data[i]);
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
    if (!mymsg__msg__Pose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
