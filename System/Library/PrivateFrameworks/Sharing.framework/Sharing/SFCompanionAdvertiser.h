@class NSString, NSData;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject

@property id<SFCompanionAdvertiserDelegate> delegate;
@property BOOL supportsStreams;
@property (readonly, copy) NSString *serviceType;
@property (readonly) NSData *serviceEndpointData;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0;
- (void)dealloc;
- (void)getContinuationStreamsWithEndpointData:(id)a0 completionHandler:(id /* block */)a1;

@end
