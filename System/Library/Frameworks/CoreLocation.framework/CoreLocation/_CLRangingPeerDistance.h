@class _CLRangingPeer, NSNumber, NSDate;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _CLRangingPeer *peer;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSNumber *distanceMeters;
@property (readonly, copy, nonatomic) NSNumber *accuracyMeters;
@property (readonly, nonatomic, getter=isInitiator) BOOL initiator;
@property (readonly, nonatomic) BOOL shouldUnlock;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)initiator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPeer:(id)a0 timestamp:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(BOOL)a4;
- (id)initWithPeer:(id)a0 date:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(BOOL)a4;
- (id)initWithPeer:(id)a0 date:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(BOOL)a4 shouldUnlock:(BOOL)a5;

@end
