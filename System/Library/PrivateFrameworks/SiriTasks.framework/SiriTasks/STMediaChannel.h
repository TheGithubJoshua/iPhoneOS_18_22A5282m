@class NSString, NSURL;

@interface STMediaChannel : STSiriModelObject

@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *streamUrl;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
