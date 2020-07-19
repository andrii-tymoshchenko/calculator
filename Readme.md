# ----------------------------
# cmake command line arguments
# ----------------------------

-DUSE_STRING_FUNC=ON - to use define USE_STRING_FUNC
-DSHAREDLIB=ON  - To link libraries as SHARED in other case will be used STATIC type

# Example:
  # To generate Makefife with parameters: -DUSE_STRING_FUNC=OFF -DSHAREDLIB=OFF
  cmake ..    

  # To use define USE_STRING_FUNC and create STATIC libraries
  cmake .. -DUSE_STRING_FUNC=ON

  # To link libraries as SHARED libraries and disable USE_STRING_FUNC define
  cmake .. -DSHAREDLIB=ON
