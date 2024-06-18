@class HMDRemoteEventRouterProtoKeepAliveMessage, NSString, HMDRemoteEventRouterProtoChangeRegistrationsMessage, HMDRemoteEventRouterProtoDisconnectMessage, HMDRemoteEventRouterProtoConnectMessage, HMDRemoteEventRouterProtoFetchEventsMessage;

@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasConnect;
@property (retain, nonatomic) HMDRemoteEventRouterProtoConnectMessage *connect;
@property (readonly, nonatomic) BOOL hasChangeRegistrations;
@property (retain, nonatomic) HMDRemoteEventRouterProtoChangeRegistrationsMessage *changeRegistrations;
@property (readonly, nonatomic) BOOL hasKeepAlive;
@property (retain, nonatomic) HMDRemoteEventRouterProtoKeepAliveMessage *keepAlive;
@property (readonly, nonatomic) BOOL hasDisconnect;
@property (retain, nonatomic) HMDRemoteEventRouterProtoDisconnectMessage *disconnect;
@property (readonly, nonatomic) BOOL hasFetchEvents;
@property (retain, nonatomic) HMDRemoteEventRouterProtoFetchEventsMessage *fetchEvents;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) int request;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRequest:(id)a0;
- (void)clearOneofValuesForRequest;
- (id)requestAsString:(int)a0;

@end
