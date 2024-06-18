@interface CAMDisplayLinkTarget : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)displayLinkDidFire:(id)a0;

@end
