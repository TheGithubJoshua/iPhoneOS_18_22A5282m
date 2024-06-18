@class NSObject, CBALSEvent;
@protocol OS_os_log;

@interface CBALSNodeiOS : NSObject {
    NSObject<OS_os_log> *_logHandle;
    int _placement;
    float _superFastIntegrationTime;
    float _fastIntegrationTime;
    float _slowIntegrationTime;
    BOOL _colorSupport;
}

@property struct __IOHIDServiceClient { } *alsService;
@property (retain, nonatomic) CBALSEvent *currentALSEvent;
@property int orientation;
@property int sensorType;

- (BOOL)handleALSEvent:(id)a0;
- (BOOL)conformsToHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isColorSupported;
- (void)initALSProperties;
- (struct __IOHIDEvent { } *)copyEvent;
- (void)dealloc;
- (id)copyALSEvent;
- (id)copyALSEventWithinTimeout:(float)a0;

@end
