@interface DocumentUnderstanding.DUDocumentUpdate : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ documentID;
    void /* unknown type, empty encoding */ documentBody;
    void /* unknown type, empty encoding */ associatedFileURL;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ updateTimestamp;
    void /* unknown type, empty encoding */ documentAttributes;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
