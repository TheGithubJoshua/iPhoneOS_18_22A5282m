@class NSUUID, NSString, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 dateOfOccurrence:(id)a1 reachable:(BOOL)a2;

@end
