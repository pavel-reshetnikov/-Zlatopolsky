# CMakeList.txt: ������ CMake ��� example2; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

# �������� �������� � ����������� ���� ����� �������.
add_executable (example2 example2.cpp )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET example2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
