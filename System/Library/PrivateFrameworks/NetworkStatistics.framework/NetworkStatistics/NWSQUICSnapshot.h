@class NSString, NSData;

@interface NWSQUICSnapshot : NWSProtocolSnapshot {
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_fuuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_tcp_descriptor { unsigned long long upid; unsigned long long eupid; unsigned long long start_timestamp; unsigned long long timestamp; unsigned long long rx_transfer_size; unsigned long long tx_transfer_size; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } activity_bitmap; unsigned int ifindex; unsigned int state; unsigned int sndbufsize; unsigned int sndbufused; unsigned int rcvbufsize; unsigned int rcvbufused; unsigned int txunacked; unsigned int txwindow; unsigned int txcwindow; unsigned int traffic_class; unsigned int traffic_mgt_flags; unsigned int pid; unsigned int epid; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } local; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } remote; char cc_algo[16]; char pname[64]; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char vuuid[16]; unsigned char fuuid[16]; union { struct tcp_conn_status { union { struct { unsigned char probe_activated : 1; unsigned char write_probe_failed : 1; unsigned char read_probe_failed : 1; unsigned char conn_probe_failed : 1; } ; unsigned int pad_field; } ; } connstatus; unsigned char __pad_connstatus[4]; } ; unsigned int ifnet_properties; unsigned char fallback_mode; unsigned char reserved[3]; } _descriptor;
    unsigned int _provider;
    unsigned long long _eventFlags;
}

@property (readonly) double rttMinimum;
@property (readonly) double rttAverage;
@property (readonly) double rttVariation;

- (BOOL)interfaceWired;
- (BOOL)interfaceAWDL;
- (BOOL)interfaceCellular;
- (unsigned int)trafficClass;
- (unsigned int)receiveBufferUsed;
- (BOOL)interfaceExpensive;
- (id)localAddress;
- (BOOL)interfaceUnknown;
- (BOOL)interfaceLoopback;
- (id)euuid;
- (int)processID;
- (unsigned int)interfaceIndex;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (id)traditionalDictionary;
- (unsigned long long)networkActivityMapPart1;
- (BOOL)interfaceCellularViaPreferredFallback;
- (unsigned long long)flowStartContinuousTime;
- (double)flowDuration;
- (unsigned long long)eupid;
- (unsigned int)receiveBufferSize;
- (id)processName;
- (int)epid;
- (BOOL)interfaceCompanionLink;
- (id)vuuid;
- (BOOL)interfaceCellularViaFallback;
- (id)flowStartTimestamp;
- (unsigned long long)uniqueProcessID;
- (id)remoteAddress;
- (id)provider;
- (BOOL)countsIncludeHeaderOverhead;
- (id)uuid;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0 QUICDescriptor:(struct nstat_tcp_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x20; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; } x21; char x22[16]; char x23[64]; unsigned char x24[16]; unsigned char x25[16]; unsigned char x26[16]; unsigned char x27[16]; union { struct tcp_conn_status { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; } x0; } x0; unsigned char x1[4]; } x28; unsigned int x29; unsigned char x30; unsigned char x31[3]; } *)a1 sourceIdent:(unsigned long long)a2 events:(unsigned long long)a3 seqno:(unsigned long long)a4 provider:(unsigned int)a5;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)eventFlags;
- (BOOL)interfaceWifi;
- (id)fuuid;

@end
