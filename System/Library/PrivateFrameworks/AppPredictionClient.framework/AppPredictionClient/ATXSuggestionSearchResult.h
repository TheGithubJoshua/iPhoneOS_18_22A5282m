@class NSUUID, NSString, ATXProactiveSuggestion;

@interface ATXSuggestionSearchResult : SFSearchResult <ATXSuggestionSearchResultProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (retain, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRequestedTopic:(id)a0;

@end
