@interface BPSTuple : NSObject

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)new;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
