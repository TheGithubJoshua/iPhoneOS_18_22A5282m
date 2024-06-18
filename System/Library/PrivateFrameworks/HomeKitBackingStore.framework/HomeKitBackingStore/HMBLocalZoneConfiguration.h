@class HMBModelContainer;
@protocol HMBLocalZoneDelegate;

@interface HMBLocalZoneConfiguration : HMFObject <NSCopying>

@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
