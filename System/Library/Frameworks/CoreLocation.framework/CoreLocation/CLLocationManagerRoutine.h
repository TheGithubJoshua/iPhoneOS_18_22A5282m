@class _CLLocationManagerRoutineProxy;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) id<CLLocationManagerDelegate> delegate;

- (id)init;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (id)initWithQueue:(id)a0;
- (void)dealloc;

@end
