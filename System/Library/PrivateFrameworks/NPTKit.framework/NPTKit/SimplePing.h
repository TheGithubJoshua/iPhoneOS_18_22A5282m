@class NSData, NSString, NSObject;
@protocol OS_dispatch_source, SimplePingDelegate;

@interface SimplePing : NSObject <NSCopying> {
    NSObject<OS_dispatch_source> *timeoutTimer;
}

@property (copy, nonatomic) NSData *hostAddress;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (weak, nonatomic) id<SimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)a0;

- (BOOL)validatePing6ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)startWithHostAddress;
- (void)stop;
- (void)stopHostResolution;
- (void)timeOutHandler:(id)a0 sequenceNumber:(unsigned short)a1;
- (void)readData;
- (void)start;
- (void)didFailWithError:(id)a0;
- (void)hostResolutionDone;
- (void)didFailWithHostStreamError:(struct { long long x0; int x1; })a0;
- (void).cxx_destruct;
- (BOOL)validatePing4ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)setupTimer:(id)a0 currentSequenceNumber:(unsigned short)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateSequenceNumber:(unsigned short)a0;
- (void)stopSocket;
- (void)dealloc;
- (BOOL)validatePingResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)sendPingWithData:(id)a0;
- (id)initWithHostName:(id)a0;
- (id)pingPacketWithType:(unsigned char)a0 payload:(id)a1 requiresChecksum:(BOOL)a2;

@end
