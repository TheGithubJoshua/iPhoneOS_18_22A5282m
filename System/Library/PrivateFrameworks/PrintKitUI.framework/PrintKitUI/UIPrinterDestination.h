@class NSURL, NSString, NSData;

@interface UIPrinterDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *displayName;
@property (copy) NSData *txtRecord;

- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
