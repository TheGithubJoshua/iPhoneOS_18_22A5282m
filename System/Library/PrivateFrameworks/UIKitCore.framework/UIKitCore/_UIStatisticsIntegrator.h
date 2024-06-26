@class NSObject;
@protocol OS_dispatch_queue;

@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> *_reportingQueue;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (void)createSharedInstanceIfNecessary;

- (id)init;
- (void)incrementValueBy:(long long)a0 forKey:(id)a1;
- (void)setValue:(long long)a0 forKey:(id)a1;
- (void)recordDistributionValue:(double)a0 forKey:(id)a1;
- (void)resetDistributionToValue:(double)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)batchRecord:(id /* block */)a0;
- (void)resetDistributionForKey:(id)a0;
- (void)recordDistributionTime:(unsigned long long)a0 forKey:(id)a1;
- (void)resetValueForKey:(id)a0;

@end
