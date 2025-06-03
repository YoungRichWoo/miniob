#pragma once

class TrxManager {
public:
  static TrxManager &instance() {
    static TrxManager instance_;
    return instance_;
  }

  bool is_enable_mvcc() const {
    return false; // 总是返回 false
  }
};
