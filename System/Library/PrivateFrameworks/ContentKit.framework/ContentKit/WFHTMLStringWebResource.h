@class NSString, NSURL;

@interface WFHTMLStringWebResource : WFWebResource

@property (readonly, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSURL *baseURL;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)textEncodingName;
- (id)initWithHTMLString:(id)a0 baseURL:(id)a1;
- (id)loadInWKWebView:(id)a0;

@end
