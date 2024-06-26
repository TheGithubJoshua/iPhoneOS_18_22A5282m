@class ChannelActivityPollingRequest, ChannelActivityActivationRequest, ChannelActivityDeactivationRequest;

@interface SharedChannelActivityRequest : PBRequest <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivationRequest;
@property (retain, nonatomic) ChannelActivityActivationRequest *activationRequest;
@property (readonly, nonatomic) BOOL hasDeactivationRequest;
@property (retain, nonatomic) ChannelActivityDeactivationRequest *deactivationRequest;
@property (readonly, nonatomic) BOOL hasPollingRequest;
@property (retain, nonatomic) ChannelActivityPollingRequest *pollingRequest;
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
