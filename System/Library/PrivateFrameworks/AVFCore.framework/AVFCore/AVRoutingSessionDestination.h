@class NSArray, AVRoutingSessionDestinationInternal;

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal *_ivars;
}

@property (readonly, nonatomic) NSArray *outputDeviceDescriptions;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) BOOL providesExternalVideoPlayback;

- (id)init;
- (id)description;
- (void)dealloc;
- (BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id *)a0;
- (id)initWithFigRoutingSessionDestination:(const struct __CFDictionary { } *)a0;

@end
