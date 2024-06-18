@interface DBTodayViewSynchronizedAnimation : NSObject

@property (copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic) BOOL ready;
@property (retain, nonatomic) id client;

- (void).cxx_destruct;
- (id)description;

@end
