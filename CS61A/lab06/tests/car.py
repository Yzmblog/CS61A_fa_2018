test = {
  'name': 'Car',
  'points': 0,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          >>> from car import *
          >>> garcias_car = Car('Tesla', 'Model S')
          >>> garcias_car.model
          74c2147b5ba7769cc5f991cbfd7b8d69
          # locked
          >>> garcias_car.gas = 10
          >>> garcias_car.drive()
          1a050ef9b8e68b745fd1986a9eba405f
          # locked
          >>> garcias_car.drive()
          0edc723be347c8f11dde0e17403604b9
          # locked
          >>> garcias_car.fill_gas()
          6ee48657b46e68acca3e4119036038c1
          # locked
          >>> garcias_car.gas
          9ff3fc64d351fcb9f34aaafe02363c3e
          # locked
          >>> Car.gas
          1987bce9c137ee1be913e29126e18d3c
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> from car import *
          >>> garcias_car = Car('Tesla', 'Model S')
          >>> garcias_car.wheels = 2
          >>> garcias_car.wheels
          d05bc830613dfa69ef96df4f94a8da70
          # locked
          >>> Car.num_wheels
          41cc26e29cc2a9e0b6fb880e349243bb
          # locked
          >>> garcias_car.drive() # Type Error if an error occurs and Nothing if nothing is displayed
          0edc723be347c8f11dde0e17403604b9
          # locked
          >>> Car.drive() # Type Error if an error occurs and Nothing if nothing is displayed
          34db8258c24aff02f4e0aeaa32af407b
          # locked
          >>> Car.drive(garcias_car) # Type Error if an error occurs and Nothing if nothing is displayed
          0edc723be347c8f11dde0e17403604b9
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> from car import *
          >>> garcias_car = MonsterTruck('Monster', 'Batmobile')
          >>> garcias_car.drive() # Type Error if an error occurs and Nothing if nothing is displayed
          238e48b17a8085331a1d671045b7a572
          fb0f2e56ddf6ff5ff7ad283bc4036c42
          # locked
          >>> Car.drive(garcias_car) # Type Error if an error occurs and Nothing if nothing is displayed
          fb0f2e56ddf6ff5ff7ad283bc4036c42
          # locked
          >>> MonsterTruck.drive(garcias_car) # Type Error if an error occurs and Nothing if nothing is displayed
          238e48b17a8085331a1d671045b7a572
          fb0f2e56ddf6ff5ff7ad283bc4036c42
          # locked
          >>> Car.rev(garcias_car) # Type Error if an error occurs and Nothing if nothing is displayed
          34db8258c24aff02f4e0aeaa32af407b
          # locked
          """,
          'hidden': False,
          'locked': True
        }
      ],
      'scored': False,
      'type': 'wwpp'
    }
  ]
}
