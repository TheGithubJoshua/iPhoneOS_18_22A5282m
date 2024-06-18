@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}

- (id)mostRelevantRecord;
- (double)sentimentScore;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
