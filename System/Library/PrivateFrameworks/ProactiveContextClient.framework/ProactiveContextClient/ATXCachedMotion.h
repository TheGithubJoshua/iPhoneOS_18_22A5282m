@class ATXMotion, NSDate;

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}

@property (readonly, copy, nonatomic) ATXMotion *currentMotion;

- (id)initWithATXMotion:(id)a0;
- (void)update:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
