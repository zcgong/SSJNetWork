//
//  NSDictionary+SSJNetWork.h
//  SSJNetWork_Example
//
//  Created by Sunjie on 2019/4/22.
//  Copyright © 2019 15220092519@163.com. All rights reserved.
//



NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (SSJNetWork)

- (NSString *)ssj_jsonString;
- (NSString *)ssj_transformToUrlParamString;

@end

NS_ASSUME_NONNULL_END
