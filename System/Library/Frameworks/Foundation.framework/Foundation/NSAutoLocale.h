@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)_update:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)_prefForKey:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)_init;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
