@protocol TFResolver;

@interface SXAdvertisementComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<TFResolver> resolver;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;

@end
