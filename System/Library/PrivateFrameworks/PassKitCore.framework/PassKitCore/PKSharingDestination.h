@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying> {
    NSString *_destinationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_name;
- (id)idsDestination;
- (id)initWithDestinationIdentifier:(id)a0;

@end
