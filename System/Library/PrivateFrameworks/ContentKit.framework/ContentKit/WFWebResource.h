@class NSData, NSURL, NSString;

@interface WFWebResource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *textEncodingName;
@property (readonly, nonatomic) NSString *frameName;

+ (id)webResourceWithData:(id)a0 MIMEType:(id)a1 textEncodingName:(id)a2 baseURL:(id)a3;
+ (id)webResourceWithFile:(id)a0;
+ (id)webResourceWithHTMLString:(id)a0 baseURL:(id)a1;
+ (id)webResourceWithURL:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id)containedImageFile;
- (id)loadInWKWebView:(id)a0;

@end
