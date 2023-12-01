/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

int lll_adv_iso_init(void);
int lll_adv_iso_reset(void);
void lll_adv_iso_create_prepare(void *param);
void lll_adv_iso_prepare(void *param);

extern struct lll_adv_iso_stream *ull_adv_iso_lll_stream_get(uint16_t handle);

extern void ull_adv_iso_lll_biginfo_fill(struct pdu_adv *pdu, struct lll_adv_sync *lll_sync);

typedef void (*ll_adv_iso_radio_isr_cb_t) (void);

void lll_adv_iso_radio_isr_cb_set(ll_adv_iso_radio_isr_cb_t cb);

// return length of pdu
typedef int (*ll_adv_iso_radio_pdu_cb_t) (uint8_t *payload);

void lll_adv_iso_radio_pdu_cb_set(ll_adv_iso_radio_pdu_cb_t cb);