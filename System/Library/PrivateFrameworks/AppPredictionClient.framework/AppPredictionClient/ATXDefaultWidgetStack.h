@class NSArray, NSString;

@interface ATXDefaultWidgetStack : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *smallDefaultStack;
@property (copy, nonatomic) NSArray *mediumDefaultStack;
@property (copy, nonatomic) NSArray *largeDefaultStack;
@property (copy, nonatomic) NSArray *extraLargeDefaultStack;
@property (nonatomic) unsigned long long suggestedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)compactDescription;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_JSONCompatible:(id)a0 compact:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_JSONCompatible:(id)a0;

@end
