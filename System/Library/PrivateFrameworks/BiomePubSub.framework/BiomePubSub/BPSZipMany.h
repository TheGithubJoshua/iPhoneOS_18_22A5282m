@class NSArray;

@interface BPSZipMany : BPSPublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;

@end
