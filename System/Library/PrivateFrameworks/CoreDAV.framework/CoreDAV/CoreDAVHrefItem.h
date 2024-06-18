@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (id)init;
- (void)write:(id)a0;
- (id)initWithURL:(id)a0;
- (id)payloadAsFullURL;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)payloadAsOriginalURL;
- (void)parserSuggestsBaseURL:(id)a0;

@end
