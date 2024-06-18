@class NSDictionary;

@interface NSPProxyAgentNetworkStatistics : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_networkCharacteristics;
    unsigned long long _proxyConnectionSuccess;
    unsigned long long _ingressProxyConnectionTimeout;
    unsigned long long _ingressProxyConnectionRefused;
    unsigned long long _ingressProxyConnectionHostDown;
    unsigned long long _ingressProxyConnectionHostUnreachable;
    unsigned long long _ingressProxyConnectionError;
    unsigned long long _ingressProxyConnectionDNSTimeout;
    unsigned long long _ingressProxyConnectionDNSBlocked;
    unsigned long long _ingressProxyConnectionCertError;
    unsigned long long _egressProxyConnectionError;
    unsigned long long _originProxyConnectionError;
    unsigned long long _egressProxyUnavailableError;
    unsigned long long _incompleteHandshakeStall;
    unsigned long long _postHandshakeStall;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
