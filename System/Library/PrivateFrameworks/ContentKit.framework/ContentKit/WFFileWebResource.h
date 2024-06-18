@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)loadInWKWebView:(id)a0;

@end
