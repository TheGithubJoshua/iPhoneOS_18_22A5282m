@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying> {
    long long _sessionIdentity;
    unsigned long long _taskIdentifier;
    unsigned long long _hash;
}

- (id)initWithSession:(id)a0 task:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
