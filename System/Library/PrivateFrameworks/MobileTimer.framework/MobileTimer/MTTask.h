@class NSString, MTGCDTimer;

@interface MTTask : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double delay;
@property (copy, nonatomic) id /* block */ completableBlock;
@property (retain, nonatomic) MTGCDTimer *timer;

+ (id)taskWithIdentifier:(id)a0 completableBlock:(id /* block */)a1;
+ (id)taskWithIdentifier:(id)a0 delay:(double)a1 completableBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)description;

@end
