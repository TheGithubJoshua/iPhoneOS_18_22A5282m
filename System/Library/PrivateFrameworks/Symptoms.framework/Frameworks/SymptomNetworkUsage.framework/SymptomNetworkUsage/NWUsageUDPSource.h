@class NSDictionary;

@interface NWUsageUDPSource : NWUsageSource {
    struct nstat_msg_src_update_udp { struct nstat_msg_hdr { unsigned long long context; unsigned int type; unsigned short length; unsigned short flags; } hdr; unsigned long long srcref; unsigned long long event_flags; struct nstat_counts { unsigned long long nstat_rxpackets; unsigned long long nstat_rxbytes; unsigned long long nstat_txpackets; unsigned long long nstat_txbytes; unsigned long long nstat_cell_rxbytes; unsigned long long nstat_cell_txbytes; unsigned long long nstat_wifi_rxbytes; unsigned long long nstat_wifi_txbytes; unsigned long long nstat_wired_rxbytes; unsigned long long nstat_wired_txbytes; unsigned int nstat_rxduplicatebytes; unsigned int nstat_rxoutoforderbytes; unsigned int nstat_txretransmit; unsigned int nstat_connectattempts; unsigned int nstat_connectsuccesses; unsigned int nstat_min_rtt; unsigned int nstat_avg_rtt; unsigned int nstat_var_rtt; } counts; unsigned int provider; unsigned char reserved[4]; struct nstat_udp_descriptor { unsigned long long upid; unsigned long long eupid; unsigned long long start_timestamp; unsigned long long timestamp; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } activity_bitmap; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } local; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } remote; unsigned int ifindex; unsigned int rcvbufsize; unsigned int rcvbufused; unsigned int traffic_class; unsigned int pid; char pname[64]; unsigned int epid; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char vuuid[16]; unsigned char fuuid[16]; unsigned int ifnet_properties; unsigned char fallback_mode; unsigned char reserved[3]; } udp_desc; } _nstatUDPUpdate;
    NSDictionary *_lookupResults;
}

- (void)deriveAttribution:(id)a0;
- (id)initWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; unsigned int x4; unsigned char x5[4]; } x0; union { struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; } x0; } x0; unsigned char x1[4]; } x28; unsigned int x29; unsigned char x30; unsigned char x31[3]; } x0; struct nstat_udp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x5; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[64]; unsigned int x13; unsigned char x14[16]; unsigned char x15[16]; unsigned char x16[16]; unsigned char x17[16]; unsigned int x18; unsigned char x19; unsigned char x20[3]; } x1; struct nstat_route_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x3; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x5; unsigned int x6; unsigned int x7; unsigned char x8[4]; } x2; struct nstat_ifnet_descriptor { unsigned long long x0; unsigned int x1; struct nstat_ifnet_desc_link_status { unsigned int x0; union { struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } x0; struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } x1; } x1; } x2; unsigned int x3; char x4[128]; char x5[17]; unsigned char x6[3]; } x3; struct nstat_sysinfo_descriptor { unsigned int x0; } x4; struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; } x0; } x0; unsigned char x1[4]; } x28; unsigned int x29; unsigned char x30; unsigned char x31[3]; } x5; struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned char x13[4]; } x6; } x1; } *)a0 length:(long long)a1 monitor:(id)a2;
- (BOOL)updateWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; unsigned int x4; unsigned char x5[4]; } x0; union { struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; } x0; } x0; unsigned char x1[4]; } x28; unsigned int x29; unsigned char x30; unsigned char x31[3]; } x0; struct nstat_udp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x5; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[64]; unsigned int x13; unsigned char x14[16]; unsigned char x15[16]; unsigned char x16[16]; unsigned char x17[16]; unsigned int x18; unsigned char x19; unsigned char x20[3]; } x1; struct nstat_route_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x3; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x5; unsigned int x6; unsigned int x7; unsigned char x8[4]; } x2; struct nstat_ifnet_descriptor { unsigned long long x0; unsigned int x1; struct nstat_ifnet_desc_link_status { unsigned int x0; union { struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } x0; struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } x1; } x1; } x2; unsigned int x3; char x4[128]; char x5[17]; unsigned char x6[3]; } x3; struct nstat_sysinfo_descriptor { unsigned int x0; } x4; struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; } x0; } x0; unsigned char x1[4]; } x28; unsigned int x29; unsigned char x30; unsigned char x31[3]; } x5; struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned char x13[4]; } x6; } x1; } *)a0 length:(long long)a1 monitor:(id)a2;
- (void).cxx_destruct;
- (id)createSnapshot:(int)a0 firstOccurrence:(BOOL)a1;
- (void)significantMetadataChange:(struct nstat_udp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x5; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[64]; unsigned int x13; unsigned char x14[16]; unsigned char x15[16]; unsigned char x16[16]; unsigned char x17[16]; unsigned int x18; unsigned char x19; unsigned char x20[3]; } *)a0 monitor:(id)a1;

@end