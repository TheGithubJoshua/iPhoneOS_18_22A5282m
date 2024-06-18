@class _DBIconListLayoutProvider;

@interface DBIconManager : SBHIconManager

@property (retain, nonatomic) _DBIconListLayoutProvider *layoutProvider;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)iconPageIndicatorImageSetCache;
- (id)listLayoutProvider;

@end
