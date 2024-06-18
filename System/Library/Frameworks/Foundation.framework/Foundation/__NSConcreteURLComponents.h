@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {
    struct __CFURLComponents { } *_components;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)query;
- (void)setHost:(id)a0;
- (id)init;
- (id)user;
- (void)setPath:(id)a0;
- (id)queryItems;
- (id)initWithString:(id)a0;
- (void)setPercentEncodedPassword:(id)a0;
- (id)scheme;
- (id)URL;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPassword;
- (id)host;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUser;
- (void)setPort:(id)a0;
- (void)setPercentEncodedQuery:(id)a0;
- (void)setPercentEncodedQueryItems:(id)a0;
- (id)path;
- (void)setQuery:(id)a0;
- (unsigned long long)hash;
- (void)setUser:(id)a0;
- (id)string;
- (id)percentEncodedQueryItems;
- (void)setQueryItems:(id)a0;
- (id)port;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPort;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)password;
- (id)URLRelativeToURL:(id)a0;
- (void)setEncodedHost:(id)a0;
- (void)setPercentEncodedUser:(id)a0;
- (id)fragment;
- (void)setPercentEncodedPath:(id)a0;
- (id)percentEncodedPassword;
- (id)percentEncodedHost;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHost;
- (id)initWithURL:(id)a0 resolvingAgainstBaseURL:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedHost;
- (void)setPercentEncodedHost:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfQuery;
- (void)setFragment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfPath;
- (id)percentEncodedPath;
- (void)dealloc;
- (id)percentEncodedUser;
- (void)setPercentEncodedFragment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfScheme;
- (void)setPassword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFragment;
- (id)percentEncodedFragment;
- (id)percentEncodedQuery;
- (void)setScheme:(id)a0;

@end
