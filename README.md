# VRChat 哔哩哔哩视频链接转换工具

用于 VRChat 世界视频播放器的 Windows 网址转换工具。

> 当前版本：**v1.4.0**

## 主要功能

- 支持手动转换和剪贴板自动监听
- 支持完整网址模式：服务前缀 + 原始哔哩哔哩网址
- 支持 BV 号模式：自动提取 BV 号并生成服务网址
- 两种模式的网址前缀均可编辑并分别保存
- 支持系统托盘、单实例运行和启动后隐藏
- 支持窗口、通知、仅窗口、仅通知和静默反馈方式
- 使用便携式 `BiliUrlConverter.ini`，不写入注册表
- 提供 x86 与 x64 版本
- 界面重新进行了美化

## 转换模式

### BV 号模式

默认服务地址：

```text
https://btv.rspark.cn/
```

输入：

```text
https://www.bilibili.com/video/BV1DY4y1F7Tq/?spm_id_from=...
```

输出：

```text
https://btv.rspark.cn/BV1DY4y1F7Tq
```

也可以直接输入 `BV1DY4y1F7Tq`。

`b23.tv` 短链接本身不包含 BV 号，程序不会联网解析短链。请先在浏览器中打开短链，再复制展开后的 `bilibili.com/video/BV...` 网址。

### 完整网址模式

默认前缀：

```text
https://biliplayer.91vrchat.com/player/?url=
```

程序会把原始哔哩哔哩网址直接追加到该前缀之后，保持 v1.3.0 及更早版本的转换方式。

## 使用方法

1. 启动程序。
2. 点击“转换设置”，选择转换模式并按需修改网址前缀。
3. 在“原始网址”中粘贴哔哩哔哩网址。
4. 点击“生成并复制”，再把结果粘贴到 VRChat 视频播放器。

开启剪贴板监听后，复制哔哩哔哩网址即可自动转换并写回剪贴板。

## 下载

请前往 [GitHub Releases](https://github.com/UNLimitedFANTASY/vrchat-bilibili-url-converter/releases) 下载最新版：

```text
Bili_URL_Converter_v1.4.0_x86.exe
Bili_URL_Converter_v1.4.0_x64.exe
```

x86 版本兼容 32 位 Windows，也可在 64 位 Windows 上运行；x64 版本适用于 64 位 Windows。

## 配置文件

配置文件位于 EXE 同目录：

```ini
[Settings]
Version=1.4.0
Prefix=https://biliplayer.91vrchat.com/player/?url=
BvPrefix=https://btv.rspark.cn/
ConversionMode=0
Monitor=1
StartHidden=0
AutoShowWindow=1
AutoNotify=1
CloseAction=0
```

`ConversionMode=0` 为完整网址模式，`ConversionMode=1` 为 BV 号模式。升级时可以保留旧版配置，程序会自动补充新增项目。

## 第三方服务说明

默认服务地址对应的第三方播放或解析服务并非由本项目作者部署、运营或维护。本工具只在 Windows 本地完成网址识别、BV 号提取、链接拼接、剪贴板读写和配置保存。

第三方服务的可用性、访问规则和后续维护由服务提供者决定。

## 隐私与免责声明

本工具不要求登录 VRChat 或哔哩哔哩，不修改或注入 VRChat 客户端，也不收集账号信息。

本项目是第三方社区工具，与 VRChat Inc.、哔哩哔哩不存在官方隶属、授权或合作关系。实际播放结果可能受到第三方服务、网络环境、视频权限和 VRChat 世界播放器实现影响。

## 源码与许可

- Windows 原生 C / Win32 API
- x86 / x64 双构建
- 客户端源码采用 [MIT License](LICENSE)
- 版本记录参见 [CHANGELOG.md](CHANGELOG.md)

