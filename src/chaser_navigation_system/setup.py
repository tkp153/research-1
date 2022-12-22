from setuptools import setup

package_name = 'chaser_navigation_system'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='takap365best@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'image_inputer = chaser_navigation_system.image_inputer:main',
            'three_d_pose_analysis = chaser_navigation_system.three_d_pose_analysis:main',
            'pose_tf2 = chaser_navigation_system.pose_tf2:main',
            'rgbd_generator = chaser_navigation_system.rgbd_generator:main',
        ],
    },
)
