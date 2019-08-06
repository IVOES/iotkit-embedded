/*
 * Copyright (C) 2015-2019 Alibaba Group Holding Limited
 */

#ifndef __INFRA_STATE_H__
#define __INFRA_STATE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define STATE_BASE                                  (0x0000)

/* General: 0x0000 ~ 0x00FF */
#define STATE_SUCCESS                               (STATE_BASE - 0x0000)

/* General: 0x0000 ~ 0x00FF */

/* User Input: 0x0100 ~ 0x01FF */
#define STATE_USER_INPUT_BASE                       (-0x0100)
#define STATE_USER_INPUT_INVALID                    (STATE_USER_INPUT_BASE - 0x0001)
#define STATE_USER_INPUT_INVALID_PK                 (STATE_USER_INPUT_BASE - 0x0002)
#define STATE_USER_INPUT_INVALID_PS                 (STATE_USER_INPUT_BASE - 0x0003)
#define STATE_USER_INPUT_INVALID_DN                 (STATE_USER_INPUT_BASE - 0x0004)
#define STATE_USER_INPUT_INVALID_DS                 (STATE_USER_INPUT_BASE - 0x0005)
#define STATE_USER_INPUT_INVALID_HTTP_DOMAIN        (STATE_USER_INPUT_BASE - 0x0006)
#define STATE_USER_INPUT_INVALID_HTTP_PORT          (STATE_USER_INPUT_BASE - 0x0007)
#define STATE_USER_INPUT_INVALID_HTTP_TIMEOUT       (STATE_USER_INPUT_BASE - 0x0008)
#define STATE_USER_INPUT_INVALID_HTTP_OPTION        (STATE_USER_INPUT_BASE - 0x0009)
#define STATE_USER_INPUT_INVALID_HTTP_POST_DATA     (STATE_USER_INPUT_BASE - 0x000A)
#define STATE_USER_INPUT_INVALID_HTTP_URL           (STATE_USER_INPUT_BASE - 0x000B)
#define STATE_USER_INPUT_INVALID_HTTP_PATH          (STATE_USER_INPUT_BASE - 0x000C)
#define STATE_USER_INPUT_INVALID_HTTP_RECV_MOREDATA (STATE_USER_INPUT_BASE - 0x000D)
#define STATE_USER_INPUT_INVALID_HTTP_MISSING_CONTENT_LENGTH (STATE_USER_INPUT_BASE - 0x000E)

/* User Input: 0x0100 ~ 0x01FF */

/* System: 0x0200 ~ 0x02FF */
#define STATE_SYS_DEPEND_BASE                       (-0x0200)
#define STATE_SYS_DEPEND_MALLOC                     (STATE_SYS_DEPEND_BASE - 0x0001)
#define STATE_SYS_DEPEND_LOCK_CREATE                (STATE_SYS_DEPEND_BASE - 0x0002)
#define STATE_SYS_DEPEND_LOCK_RELEASE               (STATE_SYS_DEPEND_BASE - 0x0003)
#define STATE_SYS_DEPEND_KV_GET                     (STATE_SYS_DEPEND_BASE - 0x0004)
#define STATE_SYS_DEPEND_KV_SET                     (STATE_SYS_DEPEND_BASE - 0x0005)
#define STATE_SYS_DEPEND_KV_DELETE                  (STATE_SYS_DEPEND_BASE - 0x0006)
#define STATE_SYS_DEPEND_TIMER_CREATE               (STATE_SYS_DEPEND_BASE - 0x0007)
#define STATE_SYS_DEPEND_TIMER_START                (STATE_SYS_DEPEND_BASE - 0x0008)
#define STATE_SYS_DEPEND_TIMER_STOP                 (STATE_SYS_DEPEND_BASE - 0x0009)
#define STATE_SYS_DEPEND_TIMER_DELETE               (STATE_SYS_DEPEND_BASE - 0x000A)
#define STATE_SYS_DEPEND_NWK_CLOSE                  (STATE_SYS_DEPEND_BASE - 0x000B)
#define STATE_SYS_DEPEND_NWK_TIMEOUT                (STATE_SYS_DEPEND_BASE - 0x000C)
#define STATE_SYS_DEPEND_NWK_INVALID_HANDLE         (STATE_SYS_DEPEND_BASE - 0x000D)

/* System: 0x0200 ~ 0x02FF */

/* MQTT: 0x0300 ~ 0x03FF */
#define STATE_MQTT_BASE                             (-0x0300)

/* Deserialized CONNACK from MQTT server says protocol version is unacceptable */
#define STATE_MQTT_CONNACK_VERSION_UNACCEPT         (STATE_MQTT_BASE - 0x0001)
/* Deserialized CONNACK from MQTT server says identifier is rejected */
#define STATE_MQTT_CONNACK_IDENT_REJECT             (STATE_MQTT_BASE - 0x0002)
/* Deserialized CONNACK from MQTT server says service is not available */
#define STATE_MQTT_CONNACK_SERVICE_NA               (STATE_MQTT_BASE - 0x0003)
/* Deserialized CONNACK from MQTT server says username/password is invalid */
#define STATE_MQTT_CONNACK_BAD_USERDATA             (STATE_MQTT_BASE - 0x0004)

#define STATE_MQTT_DYNREG_INVALID_RESPONSE          (STATE_MQTT_BASE - 0x0005)
#define STATE_MQTT_DYNREG_INVALID_DS                (STATE_MQTT_BASE - 0x0006)
#define STATE_MQTT_INVALID_DOMAIN                   (STATE_MQTT_BASE - 0x0007)
#define STATE_MQTT_SIGN_HOSTNAME_TOO_SHORT          (STATE_MQTT_BASE - 0x0008)
#define STATE_MQTT_SIGN_USERNAME_TOO_SHORT          (STATE_MQTT_BASE - 0x0009)
#define STATE_MQTT_SIGN_CLIENTID_TOO_SHORT          (STATE_MQTT_BASE - 0x000A)
#define STATE_MQTT_SIGN_SOURCE_TOO_SHORT            (STATE_MQTT_BASE - 0x000B)
#define STATE_MQTT_PREAUTH_REQ_TOO_SHORT            (STATE_MQTT_BASE - 0x000C)
#define STATE_MQTT_PREAUTH_INVALID_RESP             (STATE_MQTT_BASE - 0x000D)
#define STATE_MQTT_WRAPPER_INIT_FAIL                (STATE_MQTT_BASE - 0x000E)
#define STATE_MQTT_EVENT_HANDLE_NOT_SUPPORT         (STATE_MQTT_BASE - 0x000F)

/* MQTT: 0x0300 ~ 0x03FF */

/* WiFi Provision: 0x0400 ~ 0x04FF */
#define STATE_WIFI_BASE                             (-0x0400)

/* WiFi Provision: 0x0400 ~ 0x04FF */

/* COAP: 0x0500 ~ 0x05FF */
#define STATE_COAP_BASE                             (-0x0500)

/* COAP: 0x0500 ~ 0x05FF */

/* HTTP: 0x0600 ~ 0x06FF */
#define STATE_HTTP_BASE                             (-0x0600)

/* HTTP: 0x0600 ~ 0x06FF */

/* OTA: 0x0700 ~ 0x07FF */
#define STATE_OTA_BASE                              (-0x0700)

/* OTA: 0x0700 ~ 0x07FF */

/* Bind: 0x0800 ~ 0x08FF */
#define STATE_BIND_BASE                             (-0x0800)

/* Bind: 0x0800 ~ 0x08FF */

/* Device Model: 0x0900 ~ 0x09FF */
#define STATE_DEV_MODEL_BASE                        (-0x0900)

/* Device Model: 0x0900 ~ 0x09FF */

/* SubDevice Mgmt: 0x0A00 ~ 0x0AFF */
#define STATE_SUB_DEVICE_BASE                       (-0x0A00)

/* SubDevice Mgmt: 0x0A00 ~ 0x0AFF */

#ifdef __cplusplus
}
#endif
#endif  /* __INFRA_STATE_H__ */
