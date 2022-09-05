// SPDX-License-Identifier: GPL-2.0-only
/*
 * xlink Dispatcher.
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 */
#ifndef __XLINK_DISPATCHER_H
#define __XLINK_DISPATCHER_H

#include "xlink-defs.h"

enum xlink_error xlink_dispatcher_init(void *dev);

enum xlink_error xlink_dispatcher_start(int id, struct xlink_handle *handle);

enum xlink_error xlink_dispatcher_event_add(enum xlink_event_origin origin,
		struct xlink_event *event);

enum xlink_error xlink_dispatcher_stop(int id);

enum xlink_error xlink_dispatcher_destroy(void);

enum xlink_error xlink_dispatcher_ipc_passthru_event_add(struct xlink_event *event);

struct xlink_event *xlink_create_event(uint32_t link_id,
		enum xlink_event_type type,     struct xlink_handle *handle,
		uint16_t chan, uint32_t size, uint32_t timeout);

void xlink_destroy_event(struct xlink_event *event);

#endif /* __XLINK_DISPATCHER_H */