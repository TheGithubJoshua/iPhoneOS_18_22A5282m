@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)storeTokens;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (long long)compareToken:(id)a0 error:(id *)a1;

@end
