LIBA_TARGET     := libiot_alink.a

HDR_REFS        += src/infra
HDR_REFS		+= src/mqtt
HDR_REFS		+= src/dev_sign

DEPENDS         += wrappers
LDFLAGS         += -liot_sdk -liot_hal -liot_tls

LIB_SRCS_PATTERN     	:= *.c server/*.c client/*.c

LIB_SRCS_EXCLUDE     	  := examples/linkkit_example_solo.c
SRCS_linkkit-example-solo := examples/linkkit_example_solo.c

LIB_SRCS_EXCLUDE             += examples/linkkit_example_gateway.c
SRCS_linkkit-example-gateway = examples/linkkit_example_gateway.c

$(call Append_Conditional, TARGET, linkkit-example-solo, DEVICE_MODEL_ENABLED)
$(call Append_Conditional, TARGET, linkkit-example-gateway, DEVICE_MODEL_GATEWAY)