@class NSString, NSDictionary, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property struct URLResponse { void /* function */ **x0; struct __CFURL *x1; struct __CFString *x2; struct __CFString *x3; long long x4; double x5; double x6; struct __CFDictionary *x7; struct __CFDictionary *x8; int x9; struct __CFData *x10; struct HTTPResponse *x11; unsigned char x12; unsigned char x13; } *_cf_resp_data;
@property (readonly) long long statusCode;
@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *MIMEType;
@property (readonly) long long expectedContentLength;
@property (readonly, copy) NSString *textEncodingName;
@property (readonly, copy) NSString *suggestedFilename;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { } *)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct URLResponse { void /* function */ **x0; struct __CFURL *x1; struct __CFString *x2; struct __CFString *x3; long long x4; double x5; double x6; struct __CFDictionary *x7; struct __CFDictionary *x8; int x9; struct __CFData *x10; struct HTTPResponse *x11; unsigned char x12; unsigned char x13; } *)_inner;
- (void)dealloc;
- (id)initWithURL:(id)a0 MIMEType:(id)a1 expectedContentLength:(long long)a2 textEncodingName:(id)a3;
- (BOOL)_mustRevalidate;
- (struct _CFURLResponse { } *)_CFURLResponse;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { } *)a0;
- (id)_initWithInternal:(id)a0;
- (id)_lastModifiedDate;
- (id)_peerCertificateChain;
- (void)_setExpectedContentLength:(long long)a0;
- (void)_setMIMEType:(id)a0;

@end
