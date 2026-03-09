<<<<<<< HEAD
#include "nfc_t2t_lib.h"

static uint8_t m_ndef_msg_buf[] =
{
    0xD1, 0x01, 0x0E, 0x54,
    0x02, 0x65, 0x6E,
    'N','F','C',' ',
    'E','I','N','K'
};

void nfc_init(void)
{
    nfc_t2t_setup(NULL, NULL);
    nfc_t2t_payload_set(m_ndef_msg_buf, sizeof(m_ndef_msg_buf));
    nfc_t2t_emulation_start();
=======
#include "nfc_t2t_lib.h"

static uint8_t m_ndef_msg_buf[] =
{
    0xD1, 0x01, 0x0E, 0x54,
    0x02, 0x65, 0x6E,
    'N','F','C',' ',
    'E','I','N','K'
};

void nfc_init(void)
{
    nfc_t2t_setup(NULL, NULL);
    nfc_t2t_payload_set(m_ndef_msg_buf, sizeof(m_ndef_msg_buf));
    nfc_t2t_emulation_start();
>>>>>>> 4e9d41379c514e75d4961de59179c99531e579d0
}