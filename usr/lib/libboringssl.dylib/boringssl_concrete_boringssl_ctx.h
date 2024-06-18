@class boringssl_concrete_boringssl_psk_cache, NSString, boringssl_concrete_boringssl_session_state, boringssl_concrete_nw_protocol_boringssl, boringssl_concrete_boringssl_session_cache, NSObject, boringssl_concrete_boringssl_identity;
@protocol OS_nw_protocol_metadata, OS_nw_context, OS_xpc_object, OS_nw_protocol_options, OS_dispatch_queue, OS_nw_array;

@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {
    struct boringssl_legacy_ctx { unsigned int x0; void *x1; } *legacy_context;
    boringssl_concrete_nw_protocol_boringssl *boringssl_handle;
    NSObject<OS_nw_context> *async_context;
    boringssl_concrete_boringssl_session_cache *session_cache;
    boringssl_concrete_boringssl_psk_cache *psk_cache;
    unsigned short max_allowed_tls_version;
    unsigned short max_allowed_dtls_version;
    unsigned short min_allowed_tls_version;
    unsigned short min_allowed_dtls_version;
    unsigned short ssl_max_version;
    unsigned short ssl_min_version;
    NSObject<OS_xpc_object> *alpn_protocols;
    NSObject<OS_nw_array> *callbacks;
    char *subject_name;
    char *ciphersuite_configuration_string;
    char *experiment_identifier;
    boringssl_concrete_boringssl_identity *identity;
    id /* block */ verify_block;
    NSObject<OS_dispatch_queue> *verify_queue;
    id /* block */ challenge_block;
    NSObject<OS_dispatch_queue> *challenge_queue;
    id /* block */ key_update_block;
    NSObject<OS_dispatch_queue> *key_update_queue;
    id /* block */ session_update_block;
    NSObject<OS_dispatch_queue> *session_update_queue;
    NSObject<OS_dispatch_queue> *private_key_queue;
    id /* block */ private_key_sign_block;
    id /* block */ private_key_decrypt_block;
    NSObject<OS_dispatch_queue> *handshake_message_callback_queue;
    id /* block */ handshake_message_callback;
    union sockaddr_in_4_6 { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } sin; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } sin6; } remote_address;
    unsigned char connection_id[16];
    unsigned long long nsURLRequestAttribution;
    id /* block */ alert_callback;
    id /* block */ connected_callback;
    int internal_error;
    int ssl_state;
    int current_handshake_state;
    unsigned char current_handshake_type;
    struct boringssl_ctx_alert { int ssl_alert_type; unsigned char ssl_alert_level; unsigned char ssl_alert_code; unsigned char ssl_warning_count; } ssl_alert;
    BOOL peer_trust_result;
    int peer_trust_evaluation_error;
    unsigned long long handshake_timer_fires;
    unsigned short certificate_compression_algorithm;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *peer_public_key;
    struct __CFArray { } *peer_cert_chain;
    struct __SecTrust { } *peer_trust_ref;
    struct __CFArray { } *server_raw_public_key_certificates;
    struct __CFArray { } *client_raw_public_key_certificates;
    boringssl_concrete_boringssl_session_state *session_state;
    struct ssl_st { } *ssl_session;
    struct ssl_ctx_st { } *ssl_ctx;
    id /* block */ handshake_state_callback;
    unsigned long long handshake_start;
    unsigned long long handshake_end;
    unsigned long long current_flight_time;
    unsigned long long total_flight_time;
    unsigned long long request_epoch_ms;
    unsigned long long response_epoch_ms;
    unsigned long long outbound_byte_count;
    unsigned long long inbound_byte_count;
    unsigned long long write_stalls;
    unsigned long long read_stalls;
    unsigned long long async_count;
    NSObject<OS_nw_protocol_options> *options;
    NSObject<OS_nw_protocol_metadata> *metadata;
    unsigned long long minimum_rsa_key_size;
    unsigned long long minimum_ecdsa_key_size;
    unsigned int minimum_signature_algorithm;
    int encryption_read_level;
    int encryption_write_level;
    unsigned char started_flight : 1;
    unsigned char cancelled : 1;
    unsigned char sct_enable : 1;
    unsigned char ocsp_enable : 1;
    unsigned char server : 1;
    unsigned char dtls : 1;
    unsigned char fallback_mode : 1;
    unsigned char false_start_enabled : 1;
    unsigned char false_start_used : 1;
    unsigned char allow_server_identity_change : 1;
    unsigned char cert_lookup_done : 1;
    unsigned char trust_invalid_certs : 1;
    unsigned char session_ticket_enabled : 1;
    unsigned char npn_enabled : 1;
    unsigned char alpn_enabled : 1;
    unsigned char resumed : 1;
    unsigned char renewed : 1;
    unsigned char flight_direction : 1;
    unsigned char peer_verified : 1;
    unsigned char peer_verification_in_progress : 1;
    unsigned char received_certificate_request : 1;
    unsigned char recovered_session : 1;
    unsigned char tried_resumption : 1;
    unsigned char offered_ticket : 1;
    unsigned char early_data_enabled : 1;
    unsigned char enforce_ev : 1;
    unsigned char is_probe : 1;
    unsigned char ats_enforced : 1;
    unsigned char trust_evaluation_complete : 1;
    unsigned char certificate_compression_enabled : 1;
    unsigned char certificate_compression_used : 1;
    unsigned char psk_negotiated : 1;
    unsigned char grease_enabled : 1;
    unsigned char tls13_aesgcm_enabled : 1;
    unsigned char tls13_chacha20poly1305_enabled : 1;
    unsigned char ech_enabled : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end