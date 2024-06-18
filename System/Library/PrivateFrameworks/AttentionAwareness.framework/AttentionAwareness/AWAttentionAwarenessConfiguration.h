@class NSString, NSSet, NSDictionary;
@protocol NSCopying;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    BOOL _samplingDelayExplicitlySet;
    BOOL _attentionLostEventMaskExplicitlySet;
    unsigned long long _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<NSCopying> tag;
@property (nonatomic) unsigned long long notificationMask;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) unsigned long long attentionLostEventMask;
@property (nonatomic) double samplingInterval;
@property (nonatomic) double samplingDelay;
@property (nonatomic) BOOL sampleWhileAbsent;
@property (nonatomic) BOOL retroactiveTimeoutMode;
@property (nonatomic) BOOL continuousFaceDetectMode;
@property (nonatomic) BOOL unityStream;
@property (copy, nonatomic) NSSet *attentionLostTimeouts;
@property (copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;

+ (void)cancelNotification:(struct AWNotification_s { } *)a0;
+ (id)supportedEventsString;
+ (void)initialize;
+ (struct AWNotification_s { } *)notifySupportedEventsChangedWithQueue:(id)a0 block:(id /* block */)a1;
+ (unsigned long long)supportedEvents;

- (BOOL)validateWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)tagIndex;
- (id)attentionLostTimeouts;
- (void)encodeWithCoder:(id)a0;
- (void)setAttentionLostTimeouts:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allowedHIDEventsForRemoteEvent;
- (void)dealloc;
- (void)setAttentionLostTimeout:(double)a0;
- (void)setAllowedHIDEventsForRemoteEvent:(id)a0;

@end
