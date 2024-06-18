@class NSString;

@interface SUInstallOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isManaged) BOOL managed;
@property (retain, nonatomic) NSString *clientName;
@property (nonatomic, getter=isDarkBoot) BOOL darkBoot;
@property (nonatomic, getter=isRequired) BOOL required;
@property (nonatomic) unsigned long long ignorableConstraints;
@property (nonatomic) BOOL skipActivationCheck;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
